
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blockSizeID; } ;
typedef TYPE_1__ LZ4F_frameInfo_t ;







 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static size_t FUNC_2(const LZ4F_frameInfo_t* VAR_0) {
    switch (VAR_0->blockSizeID) {
        case 132:
        case 128: return 1 << 16;
        case 130: return 1 << 18;
        case 131: return 1 << 20;
        case 129: return 1 << 22;
        default:
            FUNC_1("Impossible with expected frame specification (<=v1.6.1)\n");
            FUNC_0(1);
    }
}
