
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int * output; } ;
struct stat {scalar_t__ st_size; } ;
typedef int oldname ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct trace *VAR_2, const char *VAR_3)
{
 struct stat VAR_4;

 if (!FUNC_3(VAR_3, &VAR_4) && VAR_4.st_size) {
  char VAR_5[VAR_0];

  FUNC_2(VAR_5, sizeof(VAR_5), "%s.old", VAR_3);
  FUNC_4(VAR_5);
  FUNC_1(VAR_3, VAR_5);
 }

 VAR_2->output = FUNC_0(VAR_3, "w");

 return VAR_2->output == ((void*)0) ? -VAR_1 : 0;
}
