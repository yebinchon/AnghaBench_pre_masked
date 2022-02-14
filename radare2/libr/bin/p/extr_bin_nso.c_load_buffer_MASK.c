
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int sdb; int loadaddr; } ;
typedef int Sdb ;
typedef int RBuffer ;
typedef TYPE_1__ RBinFile ;


 int FUNC_0 (TYPE_1__*,void**,int const*,int ,int const,int ) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static bool FUNC_3(RBinFile *VAR_0, void **VAR_1, RBuffer *VAR_2, ut64 VAR_3, Sdb *VAR_4) {
 FUNC_2 (VAR_0 && VAR_2, ((void*)0));
 const ut64 VAR_5 = VAR_0->loadaddr;
 ut64 VAR_6 = 0;
 const ut8 *VAR_7 = FUNC_1 (VAR_2, &VAR_6);
 return FUNC_0 (VAR_0, VAR_1, VAR_7, VAR_6, VAR_5, VAR_0->sdb);
}
