
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ZSTD_dictContentType_e ;
struct TYPE_3__ {int entropyPresent; int dictSize; char const* dictContent; int entropy; void* dictID; } ;
typedef TYPE_1__ ZSTD_DDict ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ) ;
 void* FUNC_2 (char const*) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,char const*,int) ;
 int VAR_4 ;

__attribute__((used)) static size_t
FUNC_4(ZSTD_DDict* VAR_5,
                         ZSTD_dictContentType_e VAR_6)
{
    VAR_5->dictID = 0;
    VAR_5->entropyPresent = 0;
    if (VAR_6 == VAR_3) return 0;

    if (VAR_5->dictSize < 8) {
        if (VAR_6 == VAR_2)
            return FUNC_1(VAR_4);
        return 0;
    }
    { U32 const VAR_7 = FUNC_2(VAR_5->dictContent);
        if (VAR_7 != VAR_1) {
            if (VAR_6 == VAR_2)
                return FUNC_1(VAR_4);
            return 0;
        }
    }
    VAR_5->dictID = FUNC_2((const char*)VAR_5->dictContent + VAR_0);


    FUNC_0( FUNC_3(&VAR_5->entropy,
                              VAR_5->dictContent, VAR_5->dictSize),
             VAR_4 );
    VAR_5->entropyPresent = 1;
    return 0;
}
