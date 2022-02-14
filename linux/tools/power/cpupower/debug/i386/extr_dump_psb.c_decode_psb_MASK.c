
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pst_header {scalar_t__ cpuid; int numpstates; int fsb; int startvid; int maxfid; } ;
struct psb_header {int version; int settlingtime; int numpst; int res1; int flags; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_2(char *VAR_3, int VAR_4)
{
 int VAR_5;
 struct psb_header *VAR_6;
 struct pst_header *VAR_7;

 VAR_6 = (struct psb_header*) VAR_3;

 if (VAR_6->version != 0x12)
  return;

 FUNC_1("PSB version: %hhx flags: %hhx settling time %hhuus res1 %hhx num pst %hhu\n",
   VAR_6->version,
   VAR_6->flags,
   VAR_6->settlingtime,
   VAR_6->res1,
   VAR_6->numpst);
 VAR_2 = VAR_6->settlingtime * 100;

 if (VAR_2 < 10000)
  VAR_2 = 10000;

 VAR_3 = ((char *) VAR_6) + sizeof(struct psb_header);

 if (VAR_4 < 0)
  VAR_4 = VAR_6->numpst;
 else
  FUNC_1("Overriding number of pst :%d\n", VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = (struct pst_header*) VAR_3;

  if (VAR_1 != 0) {
   if (VAR_1!= VAR_7->cpuid)
    goto next_one;
  }

  FUNC_1("  PST %d  cpuid %.3x fsb %hhu mfid %hhx svid %hhx numberstates %hhu\n",
    VAR_5+1,
    VAR_7->cpuid,
    VAR_7->fsb,
    VAR_7->maxfid,
    VAR_7->startvid,
    VAR_7->numpstates);

  VAR_0 = VAR_7->fsb;
  FUNC_0(VAR_3 + sizeof(struct pst_header), VAR_7->numpstates);

next_one:
  VAR_3 += sizeof(struct pst_header) + 2*VAR_7->numpstates;
 }

}
