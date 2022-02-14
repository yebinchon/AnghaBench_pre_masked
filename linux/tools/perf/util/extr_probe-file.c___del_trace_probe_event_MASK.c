
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_node {char* s; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_2, struct str_node *VAR_3)
{
 char *VAR_4;
 char VAR_5[128];
 int VAR_6;


 VAR_6 = FUNC_0(VAR_5, 128, "-:%s", VAR_3->s);
 if (VAR_6 < 0)
  goto error;

 VAR_4 = FUNC_4(VAR_5 + 2, ':');
 if (!VAR_4) {
  FUNC_1("Internal error: %s should have ':' but not.\n",
    VAR_3->s);
  VAR_6 = -VAR_0;
  goto error;
 }
 *VAR_4 = '/';

 FUNC_1("Writing event: %s\n", VAR_5);
 VAR_6 = FUNC_6(VAR_2, VAR_5, FUNC_5(VAR_5));
 if (VAR_6 < 0) {
  VAR_6 = -VAR_1;
  goto error;
 }

 return 0;
error:
 FUNC_2("Failed to delete event: %s\n",
     FUNC_3(-VAR_6, VAR_5, sizeof(VAR_5)));
 return VAR_6;
}
