
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16 ;
typedef int security_context_t ;
typedef int security_class_t ;
struct TYPE_2__ {char* class_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 size_t VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,char const*,char const*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,char const*,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_10 (char const*) ;

char *
FUNC_11(const char *VAR_4,
        const char *VAR_5,
        uint16 VAR_6,
        const char *VAR_7)
{
 security_context_t VAR_8;
 security_class_t VAR_9;
 const char *VAR_10;
 char *VAR_11;


 FUNC_0(VAR_6 < VAR_2);

 VAR_10 = VAR_3[VAR_6].class_name;
 VAR_9 = FUNC_10(VAR_10);





 if (FUNC_9((security_context_t) VAR_4,
           (security_context_t) VAR_5,
           VAR_9,
           VAR_7,
           &VAR_8) < 0)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("SELinux could not compute a new context: "
      "scontext=%s tcontext=%s tclass=%s: %m",
      VAR_4, VAR_5, VAR_10)));





 FUNC_3();
 {
  VAR_11 = FUNC_8(VAR_8);
 }
 FUNC_2();
 {
  FUNC_7(VAR_8);
 }
 FUNC_1();

 return VAR_11;
}
