
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* Buf; } ;
struct TYPE_5__ {TYPE_2__* Private; } ;
typedef TYPE_1__ GifFileType ;
typedef TYPE_2__ GifFilePrivateType ;
typedef int GifByteType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int
FUNC_1(GifFileType * VAR_2,
                     GifByteType ** VAR_3) {

    GifByteType VAR_4;
    GifFilePrivateType *VAR_5 = VAR_2->Private;

    if (FUNC_0(VAR_2, &VAR_4, 1) != 1) {
        return VAR_0;
    }
    if (VAR_4 > 0) {
        *VAR_3 = VAR_5->Buf;
        (*VAR_3)[0] = VAR_4;
        if (FUNC_0(VAR_2, &((*VAR_3)[1]), VAR_4) != VAR_4) {
            return VAR_0;
        }
    } else
        *VAR_3 = ((void*)0);

    return VAR_1;
}
