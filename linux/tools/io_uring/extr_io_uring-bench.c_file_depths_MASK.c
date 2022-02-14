
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submitter {unsigned int nr_files; struct file* files; } ;
struct file {int pending_ios; } ;


 int FUNC_0 (char*,char*,int) ;
 struct submitter* VAR_0 ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
 struct submitter *VAR_2 = &VAR_0[0];
 unsigned VAR_3;
 char *VAR_4;

 VAR_1[0] = '\0';
 VAR_4 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2->nr_files; VAR_3++) {
  struct file *VAR_5 = &VAR_2->files[VAR_3];

  if (VAR_3 + 1 == VAR_2->nr_files)
   VAR_4 += FUNC_0(VAR_4, "%d", VAR_5->pending_ios);
  else
   VAR_4 += FUNC_0(VAR_4, "%d, ", VAR_5->pending_ios);
 }
}
