
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdso_file {int found; char* temp_file_name; int error; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void**,void**,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (void*,size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,char*,size_t) ;

__attribute__((used)) static char *FUNC_6(struct vdso_file *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 void *VAR_4, *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (VAR_1->found)
  return VAR_1->temp_file_name;

 if (VAR_1->error || FUNC_1(&VAR_4, &VAR_5, VAR_0))
  return ((void*)0);

 VAR_6 = VAR_5 - VAR_4;

 VAR_3 = FUNC_3(VAR_4, VAR_6);
 if (!VAR_3)
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_1->temp_file_name);
 if (VAR_7 < 0)
  goto out;

 if (VAR_6 == (size_t) FUNC_5(VAR_7, VAR_3, VAR_6))
  VAR_2 = VAR_1->temp_file_name;

 FUNC_0(VAR_7);

 out:
 FUNC_2(VAR_3);

 VAR_1->found = (VAR_2 != ((void*)0));
 VAR_1->error = !VAR_1->found;
 return VAR_2;
}
