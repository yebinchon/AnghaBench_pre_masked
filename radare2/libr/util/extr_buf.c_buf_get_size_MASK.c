
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* get_size ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RBuffer ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ut64 FUNC_2(RBuffer *VAR_1) {
 FUNC_0 (VAR_1 && VAR_1->methods, VAR_0);
 return VAR_1->methods->get_size? VAR_1->methods->get_size (VAR_1): VAR_0;
}
