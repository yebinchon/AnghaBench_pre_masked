
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ext2_file_t ;
typedef int errcode_t ;
struct TYPE_6__ {struct TYPE_6__* buf; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;

errcode_t FUNC_3(ext2_file_t VAR_1)
{
 errcode_t VAR_2;

 FUNC_0(VAR_1, VAR_0);

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->buf)
  FUNC_2(&VAR_1->buf);
 FUNC_2(&VAR_1);

 return VAR_2;
}
