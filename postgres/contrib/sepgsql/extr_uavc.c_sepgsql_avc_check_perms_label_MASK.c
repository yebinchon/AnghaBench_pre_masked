
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_3__ {int allowed; int auditdeny; int auditallow; char const* tcontext; int tclass; scalar_t__ tcontext_is_valid; int scontext; scalar_t__ permissive; } ;
typedef TYPE_1__ avc_cache ;


 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,char const*,int ,int,char const*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (char*,char const*,int ) ;
 char const* FUNC_6 () ;
 char* FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;

bool
FUNC_11(const char *VAR_4,
         uint16 VAR_5, uint32 VAR_6,
         const char *VAR_7,
         bool VAR_8)
{
 char *VAR_9 = FUNC_7();
 avc_cache *VAR_10;
 uint32 VAR_11;
 uint32 VAR_12;
 bool VAR_13;

 FUNC_4();
 do
 {
  VAR_13 = 1;





  if (VAR_4)
   VAR_10 = FUNC_5(VAR_9, VAR_4, VAR_5);
  else
   VAR_10 = FUNC_5(VAR_9,
            FUNC_6(), VAR_5);

  VAR_11 = VAR_6 & ~VAR_10->allowed;




  if (FUNC_8())
   VAR_12 = (VAR_11 ? (VAR_11 & ~0) : (VAR_6 & ~0));
  else
   VAR_12 = VAR_11 ? (VAR_11 & VAR_10->auditdeny)
    : (VAR_6 & VAR_10->auditallow);

  if (VAR_11)
  {







   if (!FUNC_10() || VAR_10->permissive)
    VAR_10->allowed |= VAR_6;
   else
    VAR_13 = 0;
  }
 } while (!FUNC_4());
 if (VAR_12 != 0 &&
  VAR_7 != VAR_2 &&
  FUNC_9() != VAR_3)
 {
  FUNC_3(VAR_11 != 0,
        VAR_10->scontext,
        VAR_10->tcontext_is_valid ?
        VAR_10->tcontext : FUNC_6(),
        VAR_10->tclass,
        VAR_12,
        VAR_7);
 }

 if (VAR_8 && !VAR_13)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("SELinux: security policy violation")));

 return VAR_13;
}
