
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int dRess_t ;
struct TYPE_6__ {int passThrough; int overwrite; int testMode; } ;
typedef TYPE_1__ LZ4IO_prefs_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;



 unsigned long long FUNC_2 (TYPE_1__* const,int *,int *) ;
 unsigned long long FUNC_3 (TYPE_1__* const,int ,int *,int *) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned long long FUNC_5 (TYPE_1__* const,int *,int *,unsigned char*) ;
 void* FUNC_6 (unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_7 (unsigned char*,int,int,int *) ;
 int FUNC_8 (int *,unsigned int const,int ) ;
 long FUNC_9 (int *) ;
 int VAR_4 ;

__attribute__((used)) static unsigned long long FUNC_10(LZ4IO_prefs_t* const VAR_5, dRess_t VAR_6, FILE* VAR_7, FILE* VAR_8)
{
    unsigned char VAR_9[VAR_2];
    unsigned VAR_10;
    static unsigned VAR_11 = 0;


    VAR_11++;


    if (VAR_4) {
        VAR_10 = VAR_4;
        VAR_4 = 0;
    } else {
        size_t const VAR_12 = FUNC_7(VAR_9, 1, VAR_2, VAR_7);
        if (VAR_12==0) { VAR_11 = 0; return VAR_0; }
        if (VAR_12 != VAR_2)
          FUNC_1(40, "Unrecognized header : Magic Number unreadable");
        VAR_10 = FUNC_6(VAR_9);
    }
    if (FUNC_4(VAR_10))
        VAR_10 = 128;

    switch(VAR_10)
    {
    case 129:
        return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
    case 130:
        FUNC_0(4, "Detected : Legacy format \n");
        return FUNC_2(VAR_5, VAR_7, VAR_8);
    case 128:
        FUNC_0(4, "Skipping detected skippable area \n");
        { size_t const VAR_13 = FUNC_7(VAR_9, 1, 4, VAR_7);
            if (VAR_13 != 4)
                FUNC_1(42, "Stream error : skippable size unreadable");
        }
        { unsigned const VAR_14 = FUNC_6(VAR_9);
            int const VAR_15 = FUNC_8(VAR_7, VAR_14, VAR_3);
            if (VAR_15 != 0)
                FUNC_1(43, "Stream error : cannot skip skippable area");
        }
        return 0;
    VAR_1;
    default:
        if (VAR_11 == 1) {

            if (!VAR_5->testMode && VAR_5->overwrite && VAR_5->passThrough) {
                VAR_11 = 0;
                return FUNC_5(VAR_5, VAR_7, VAR_8, VAR_9);
            }
            FUNC_1(44,"Unrecognized header : file cannot be decoded");
        }
        { long int const VAR_16 = FUNC_9(VAR_7);
            FUNC_0(2, "Stream followed by undecodable data ");
            if (VAR_16 != -1L)
                FUNC_0(2, "at position %i ", (int)VAR_16);
            FUNC_0(2, "\n");
        }
        return VAR_0;
    }
}
