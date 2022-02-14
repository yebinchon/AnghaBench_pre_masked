
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int st64 ;
struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* seek ) (TYPE_2__*,int,int) ;} ;
typedef TYPE_2__ RBuffer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_0, st64 VAR_1, int VAR_2) {
 FUNC_0 (VAR_0 && VAR_0->methods, -1);
 return VAR_0->methods->seek? VAR_0->methods->seek (VAR_0, VAR_1, VAR_2): -1;
}
