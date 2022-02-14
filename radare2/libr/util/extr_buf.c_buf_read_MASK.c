
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int st64 ;
struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* read ) (TYPE_2__*,int *,size_t) ;} ;
typedef TYPE_2__ RBuffer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_0, ut8 *VAR_1, size_t VAR_2) {
 FUNC_0 (VAR_0 && VAR_0->methods, -1);
 return VAR_0->methods->read? VAR_0->methods->read (VAR_0, VAR_1, VAR_2): -1;
}
