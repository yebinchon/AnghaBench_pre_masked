
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long uint32 ;
typedef size_t uint16 ;
struct TYPE_9__ {char* class_name; TYPE_1__* av; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {char* av_name; } ;
typedef TYPE_2__ StringInfoData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,char const*,...) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_3__* VAR_2 ;

void
FUNC_6(bool VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      uint16 VAR_6,
      uint32 VAR_7,
      const char *VAR_8)
{
 StringInfoData VAR_9;
 const char *VAR_10;
 const char *VAR_11;
 int VAR_12;


 FUNC_0(VAR_6 < VAR_1);
 VAR_10 = VAR_2[VAR_6].class_name;


 FUNC_5(&VAR_9);
 FUNC_1(&VAR_9, "%s {",
      (VAR_3 ? "denied" : "allowed"));
 for (VAR_12 = 0; VAR_2[VAR_6].av[VAR_12].av_name; VAR_12++)
 {
  if (VAR_7 & (1UL << VAR_12))
  {
   VAR_11 = VAR_2[VAR_6].av[VAR_12].av_name;
   FUNC_1(&VAR_9, " %s", VAR_11);
  }
 }
 FUNC_2(&VAR_9, " }");




 FUNC_1(&VAR_9, " scontext=%s tcontext=%s tclass=%s",
      VAR_4, VAR_5, VAR_10);
 if (VAR_8)
  FUNC_1(&VAR_9, " name=\"%s\"", VAR_8);

 FUNC_3(VAR_0, (FUNC_4("SELinux: %s", VAR_9.data)));
}
