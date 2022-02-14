
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testdev {char* name; int ifnum; struct testdev* next; int speed; } ;
struct stat {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 struct testdev* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*,char*,int) ;
 int FUNC_4 (struct testdev*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ) ;
 int VAR_1 ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 struct testdev* VAR_2 ;

__attribute__((used)) static int FUNC_9(const char *VAR_3, const struct stat *VAR_4, int VAR_5)
{
 FILE *VAR_6;
 int VAR_7;
 struct testdev *VAR_8;

 (void)VAR_4;

 if (VAR_5 != VAR_0)
  return 0;

 VAR_6 = FUNC_2(VAR_3, "rb");
 if (!VAR_6) {
  FUNC_5(VAR_3);
  return 0;
 }

 VAR_7 = FUNC_8(VAR_6);
 FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return 0;

 VAR_8 = FUNC_0(1, sizeof *VAR_8);
 if (!VAR_8)
  goto nomem;

 VAR_8->name = FUNC_7(VAR_3);
 if (!VAR_8->name) {
  FUNC_4(VAR_8);
nomem:
  FUNC_5("malloc");
  return 0;
 }

 VAR_8->ifnum = VAR_7;



 FUNC_3(VAR_1, "%s speed\t%s\t%u\n",
  FUNC_6(VAR_8->speed), VAR_8->name, VAR_8->ifnum);

 VAR_8->next = VAR_2;
 VAR_2 = VAR_8;
 return 0;
}
