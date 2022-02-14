
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long len; } ;
struct TYPE_5__ {unsigned int dropepoch; int droprec; int duprec; int pkts; } ;
typedef TYPE_1__ MEMPACKET_TEST_CTX ;
typedef TYPE_2__ MEMPACKET ;
typedef int BIO ;
 TYPE_1__* FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;




 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;

__attribute__((used)) static long FUNC_5(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    long VAR_4 = 1;
    MEMPACKET_TEST_CTX *VAR_5 = FUNC_0(VAR_0);
    MEMPACKET *VAR_6;

    switch (VAR_1) {
    case 140:
        VAR_4 = (long)(FUNC_3(VAR_5->pkts) == 0);
        break;
    case 138:
        VAR_4 = FUNC_1(VAR_0);
        break;
    case 133:
        FUNC_2(VAR_0, (int)VAR_2);
        break;
    case 132:
        VAR_4 = 0L;
        break;
    case 137:
        VAR_6 = FUNC_4(VAR_5->pkts, 0);
        if (VAR_6 == ((void*)0))
            VAR_4 = 0;
        else
            VAR_4 = VAR_6->len;
        break;
    case 139:
        VAR_4 = 1;
        break;
    case 130:
        VAR_5->dropepoch = (unsigned int)VAR_2;
        break;
    case 129:
        VAR_5->droprec = (int)VAR_2;
        break;
    case 131:
        VAR_4 = VAR_5->droprec;
        break;
    case 128:
        VAR_5->duprec = (int)VAR_2;
        break;
    case 134:
    case 141:
    case 135:
    case 136:
    default:
        VAR_4 = 0;
        break;
    }
    return VAR_4;
}
