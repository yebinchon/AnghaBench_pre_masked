
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef size_t uint16 ;
struct av_decision {int allowed; unsigned int auditallow; unsigned int auditdeny; scalar_t__ flags; } ;
typedef int security_context_t ;
typedef scalar_t__ security_class_t ;
typedef int access_vector_t ;
struct TYPE_4__ {size_t class_code; char* class_name; TYPE_1__* av; } ;
struct TYPE_3__ {char* av_name; int av_code; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,char const*,char const*) ;
 int FUNC_4 (struct av_decision*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,int ,struct av_decision*) ;
 int FUNC_6 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_7 (scalar_t__,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

void
FUNC_9(const char *VAR_4,
     const char *VAR_5,
     uint16 VAR_6,
     struct av_decision *VAR_7)
{
 const char *VAR_8;
 security_class_t VAR_9;
 struct av_decision VAR_10;
 int VAR_11,
    VAR_12 = FUNC_6();


 FUNC_0(VAR_6 < VAR_2);
 FUNC_0(VAR_6 == VAR_3[VAR_6].class_code);

 VAR_8 = VAR_3[VAR_6].class_name;
 VAR_9 = FUNC_8(VAR_8);

 if (VAR_9 == 0)
 {






  VAR_7->allowed = (FUNC_6() > 0 ? 0 : ~0);
  VAR_7->auditallow = 0U;
  VAR_7->auditdeny = ~0U;
  VAR_7->flags = 0;

  return;
 }





 if (FUNC_5((security_context_t) VAR_4,
           (security_context_t) VAR_5,
           VAR_9, 0, &VAR_10) < 0)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("SELinux could not compute av_decision: "
      "scontext=%s tcontext=%s tclass=%s: %m",
      VAR_4, VAR_5, VAR_8)));







 FUNC_4(VAR_7, 0, sizeof(struct av_decision));

 for (VAR_11 = 0; VAR_3[VAR_6].av[VAR_11].av_name; VAR_11++)
 {
  access_vector_t VAR_13;
  const char *VAR_14 = VAR_3[VAR_6].av[VAR_11].av_name;
  uint32 VAR_15 = VAR_3[VAR_6].av[VAR_11].av_code;

  VAR_13 = FUNC_7(VAR_9, VAR_14);
  if (VAR_13 == 0)
  {

   if (!VAR_12)
    VAR_7->allowed |= VAR_15;
   VAR_7->auditdeny |= VAR_15;

   continue;
  }

  if (VAR_10.allowed & VAR_13)
   VAR_7->allowed |= VAR_15;
  if (VAR_10.auditallow & VAR_13)
   VAR_7->auditallow |= VAR_15;
  if (VAR_10.auditdeny & VAR_13)
   VAR_7->auditdeny |= VAR_15;
 }

 return;
}
