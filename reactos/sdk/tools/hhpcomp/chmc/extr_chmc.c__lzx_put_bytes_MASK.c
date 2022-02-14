
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct chmcSect0 {int file_len; } ;
struct chmcLzxInfo {TYPE_2__* section; TYPE_1__* chm; } ;
struct TYPE_4__ {int len; int fd; } ;
struct TYPE_3__ {struct chmcSect0 sect0; } ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, void *VAR_2)
{
 struct chmcLzxInfo *VAR_3 = (struct chmcLzxInfo *)VAR_0;
 struct chmcSect0 *VAR_4 = &VAR_3->chm->sect0;
 int VAR_5;
 static int VAR_6 = 0;

 VAR_6 += VAR_1;
 VAR_5 = FUNC_0(VAR_3->section->fd, VAR_2, VAR_1);
 VAR_4->file_len += VAR_5;
 VAR_3->section->len += VAR_5;

 return VAR_5;
}
