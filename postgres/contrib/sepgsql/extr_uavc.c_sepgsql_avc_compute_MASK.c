
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct av_decision {int flags; int auditdeny; int auditallow; int allowed; } ;
typedef int security_context_t ;
struct TYPE_5__ {int hash; int hot_cache; int permissive; int tcontext_is_valid; void* ncontext; int auditdeny; int auditallow; int allowed; int tclass; void* tcontext; void* scontext; } ;
typedef TYPE_1__ avc_cache ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*,char const*,int ) ;
 int FUNC_7 () ;
 char* FUNC_8 () ;
 int FUNC_9 (char const*,char const*,int ,struct av_decision*) ;
 char* FUNC_10 (char const*,char const*,int ,int *) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static avc_cache *
FUNC_12(const char *VAR_8, const char *VAR_9, uint16 VAR_10)
{
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 MemoryContext VAR_13;
 avc_cache *VAR_14;
 uint32 VAR_15;
 int VAR_16;
 struct av_decision VAR_17;

 VAR_15 = FUNC_6(VAR_8, VAR_9, VAR_10);
 VAR_16 = VAR_15 % VAR_0;







 if (FUNC_5((security_context_t) VAR_9) != 0)
  VAR_11 = FUNC_8();




 if (!VAR_11)
  FUNC_9(VAR_8, VAR_9, VAR_10, &VAR_17);
 else
  FUNC_9(VAR_8, VAR_11, VAR_10, &VAR_17);
 if (VAR_10 == VAR_2)
 {
  if (!VAR_11)
   VAR_12 = FUNC_10(VAR_8, VAR_9,
             VAR_3, ((void*)0));
  else
   VAR_12 = FUNC_10(VAR_8, VAR_11,
             VAR_3, ((void*)0));
  if (FUNC_11(VAR_8, VAR_12) == 0)
  {
   FUNC_3(VAR_12);
   VAR_12 = ((void*)0);
  }
 }




 VAR_13 = FUNC_0(VAR_4);

 VAR_14 = FUNC_2(sizeof(avc_cache));

 VAR_14->hash = VAR_15;
 VAR_14->scontext = FUNC_4(VAR_8);
 VAR_14->tcontext = FUNC_4(VAR_9);
 VAR_14->tclass = VAR_10;

 VAR_14->allowed = VAR_17.allowed;
 VAR_14->auditallow = VAR_17.auditallow;
 VAR_14->auditdeny = VAR_17.auditdeny;
 VAR_14->hot_cache = 1;
 if (VAR_17.flags & VAR_1)
  VAR_14->permissive = 1;
 if (!VAR_11)
  VAR_14->tcontext_is_valid = 1;
 if (VAR_12)
  VAR_14->ncontext = FUNC_4(VAR_12);

 VAR_5++;

 if (VAR_5 > VAR_7)
  FUNC_7();

 VAR_6[VAR_16] = FUNC_1(VAR_14, VAR_6[VAR_16]);

 FUNC_0(VAR_13);

 return VAR_14;
}
