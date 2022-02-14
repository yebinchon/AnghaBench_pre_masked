
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_5__ {int leaf_type; TYPE_2__ name; int segment; int offset; int symtype; } ;
typedef TYPE_1__ SGlobal ;


 int FUNC_0 (unsigned int,int,int ,char*,int ) ;
 int FUNC_1 (unsigned int,int,int ,char*,int ) ;
 int FUNC_2 (unsigned int,int,int ,char*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,unsigned int*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(char *VAR_2, int VAR_3, SGlobal *VAR_4) {
 unsigned int VAR_5 = 2;

 FUNC_2(VAR_5, VAR_3, VAR_4->symtype, VAR_2, VAR_0);
 FUNC_2(VAR_5, VAR_3, VAR_4->offset, VAR_2, VAR_0);
 FUNC_1(VAR_5, VAR_3, VAR_4->segment, VAR_2, VAR_1);
 if (VAR_4->leaf_type == 0x110E) {
  FUNC_4(&VAR_4->name, (unsigned char *)VAR_2, &VAR_5, VAR_3);
 } else {
  FUNC_0(VAR_5, VAR_3, VAR_4->name.size, VAR_2, VAR_1);
  FUNC_3(&VAR_4->name, VAR_4->name.size, VAR_2);
 }

 return VAR_5;
}
