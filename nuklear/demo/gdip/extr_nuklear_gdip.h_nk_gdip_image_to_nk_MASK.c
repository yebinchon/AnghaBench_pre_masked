
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_image {void* w; void* h; } ;
typedef void* UINT ;
typedef int GpImage ;


 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *,void**) ;
 struct nk_image FUNC_2 (void*) ;

__attribute__((used)) static struct nk_image
FUNC_3(GpImage *VAR_0) {
    struct nk_image VAR_1;
    UINT VAR_2, VAR_3;
    VAR_1 = FUNC_2( (void*)VAR_0 );
    FUNC_0(VAR_0, &VAR_3);
    FUNC_1(VAR_0, &VAR_2);
    VAR_1.h = VAR_3;
    VAR_1.w = VAR_2;
    return VAR_1;
}
