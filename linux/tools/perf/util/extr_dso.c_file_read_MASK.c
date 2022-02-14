
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ fd; int status; } ;
struct dso {TYPE_1__ data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dso*,struct machine*) ;

__attribute__((used)) static ssize_t FUNC_4(struct dso *VAR_4, struct machine *VAR_5,
    u64 VAR_6, char *VAR_7)
{
 ssize_t VAR_8;

 FUNC_1(&VAR_2);





 FUNC_3(VAR_4, VAR_5);

 if (VAR_4->data.fd < 0) {
  VAR_4->data.status = VAR_0;
  VAR_8 = -VAR_3;
  goto out;
 }

 VAR_8 = FUNC_0(VAR_4->data.fd, VAR_7, VAR_1, VAR_6);
out:
 FUNC_2(&VAR_2);
 return VAR_8;
}
