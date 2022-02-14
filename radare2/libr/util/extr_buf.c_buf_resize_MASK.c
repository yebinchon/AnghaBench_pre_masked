
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* resize ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ RBuffer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0, ut64 VAR_1) {
 FUNC_0 (VAR_0 && VAR_0->methods, -1);
 return VAR_0->methods->resize? VAR_0->methods->resize (VAR_0, VAR_1): 0;
}
