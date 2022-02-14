
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,void const*) ;
 int FUNC_4 (int *,int *,int *,uintptr_t,int ,int) ;
 int * FUNC_5 (int *,int *) ;

__attribute__((used)) static size_t
FUNC_6(tsdn_t *VAR_4, extent_t *VAR_5, const void *VAR_6) {
 FUNC_1(VAR_2);
 FUNC_0(VAR_6 != ((void*)0));

 FUNC_2(VAR_5, VAR_1);
 rtree_ctx_t VAR_7;
 rtree_ctx_t *VAR_8 = FUNC_5(VAR_4, &VAR_7);
 FUNC_4(VAR_4, &VAR_3, VAR_8, (uintptr_t)VAR_6,
     VAR_1, 0);

 FUNC_0(FUNC_3(VAR_4, VAR_6) == VAR_0);

 return VAR_0;
}
