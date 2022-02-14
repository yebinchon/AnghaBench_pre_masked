
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_param {scalar_t__ level; int mod; TYPE_1__* ops; int name; } ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {int flags; int (* set ) (char*,struct kernel_param const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kernel_param const*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char*,struct kernel_param const*) ;

__attribute__((used)) static int FUNC_6(char *VAR_4,
       char *VAR_5,
       const char *VAR_6,
       const struct kernel_param *VAR_7,
       unsigned VAR_8,
       s16 VAR_9,
       s16 VAR_10,
       void *VAR_11,
       int (*VAR_12)(char *VAR_13, char *VAR_14,
         const char *VAR_15, void *VAR_16))
{
 unsigned int VAR_17;
 int VAR_18;


 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  if (FUNC_3(VAR_4, VAR_7[VAR_17].name)) {
   if (VAR_7[VAR_17].level < VAR_9
       || VAR_7[VAR_17].level > VAR_10)
    return 0;

   if (!VAR_5 &&
       !(VAR_7[VAR_17].ops->flags & VAR_3))
    return -VAR_0;
   FUNC_4("handling %s with %p\n", VAR_4,
    VAR_7[VAR_17].ops->set);
   FUNC_0(VAR_7[VAR_17].mod);
   if (FUNC_2(&VAR_7[VAR_17]))
    VAR_18 = VAR_7[VAR_17].ops->set(VAR_5, &VAR_7[VAR_17]);
   else
    VAR_18 = -VAR_2;
   FUNC_1(VAR_7[VAR_17].mod);
   return VAR_18;
  }
 }

 if (VAR_12) {
  FUNC_4("doing %s: %s='%s'\n", VAR_6, VAR_4, VAR_5);
  return VAR_12(VAR_4, VAR_5, VAR_6, VAR_11);
 }

 FUNC_4("Unknown argument '%s'\n", VAR_4);
 return -VAR_1;
}
