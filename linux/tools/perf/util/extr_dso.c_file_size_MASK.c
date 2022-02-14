
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ fd; int file_size; void* status; } ;
struct dso {TYPE_1__ data; } ;
typedef int sbuf ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct stat*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (struct dso*,struct machine*) ;

__attribute__((used)) static int FUNC_6(struct dso *VAR_4, struct machine *VAR_5)
{
 int VAR_6 = 0;
 struct stat VAR_7;
 char VAR_8[VAR_1];

 FUNC_2(&VAR_2);





 FUNC_5(VAR_4, VAR_5);

 if (VAR_4->data.fd < 0) {
  VAR_6 = -VAR_3;
  VAR_4->data.status = VAR_0;
  goto out;
 }

 if (FUNC_0(VAR_4->data.fd, &VAR_7) < 0) {
  VAR_6 = -VAR_3;
  FUNC_1("dso cache fstat failed: %s\n",
         FUNC_4(VAR_3, VAR_8, sizeof(VAR_8)));
  VAR_4->data.status = VAR_0;
  goto out;
 }
 VAR_4->data.file_size = VAR_7.st_size;

out:
 FUNC_3(&VAR_2);
 return VAR_6;
}
