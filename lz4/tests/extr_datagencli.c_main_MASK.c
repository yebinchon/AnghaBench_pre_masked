
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef int U32 ;


 double VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int,double,double,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;

int FUNC_3(int VAR_5, char** VAR_6)
{
    int VAR_7;
    double VAR_8 = (double)VAR_0 / 100;
    double VAR_9 = 0.0;
    U64 VAR_10 = VAR_3;
    U32 VAR_11 = VAR_2;
    char* VAR_12;


    VAR_12 = VAR_6[0];
    for(VAR_7=1; VAR_7<VAR_5; VAR_7++)
    {
        char* VAR_13 = VAR_6[VAR_7];

        if(!VAR_13) continue;


        if (*VAR_13=='-')
        {
            VAR_13++;
            while (*VAR_13!=0)
            {
                switch(*VAR_13)
                {
                case 'h':
                    return FUNC_2(VAR_12);
                case 'g':
                    VAR_13++;
                    VAR_10=0;
                    while ((*VAR_13>='0') && (*VAR_13<='9'))
                    {
                        VAR_10 *= 10;
                        VAR_10 += *VAR_13 - '0';
                        VAR_13++;
                    }
                    if (*VAR_13=='K') { VAR_10 <<= 10; VAR_13++; }
                    if (*VAR_13=='M') { VAR_10 <<= 20; VAR_13++; }
                    if (*VAR_13=='G') { VAR_10 <<= 30; VAR_13++; }
                    if (*VAR_13=='B') { VAR_13++; }
                    break;
                case 's':
                    VAR_13++;
                    VAR_11=0;
                    while ((*VAR_13>='0') && (*VAR_13<='9'))
                    {
                        VAR_11 *= 10;
                        VAR_11 += *VAR_13 - '0';
                        VAR_13++;
                    }
                    break;
                case 'P':
                    VAR_13++;
                    VAR_8=0.0;
                    while ((*VAR_13>='0') && (*VAR_13<='9'))
                    {
                        VAR_8 *= 10;
                        VAR_8 += *VAR_13 - '0';
                        VAR_13++;
                    }
                    if (VAR_8>100.) VAR_8=100.;
                    VAR_8 /= 100.;
                    break;
                case 'L':
                    VAR_13++;
                    VAR_9=0.;
                    while ((*VAR_13>='0') && (*VAR_13<='9'))
                    {
                        VAR_9 *= 10;
                        VAR_9 += *VAR_13 - '0';
                        VAR_13++;
                    }
                    if (VAR_9>100.) VAR_9=100.;
                    VAR_9 /= 100.;
                    break;
                case 'v':
                    VAR_4 = 4;
                    VAR_13++;
                    break;
                default:
                    return FUNC_2(VAR_12);
                }
            }

        }
    }

    FUNC_0(4, "Data Generator %s \n", VAR_1);
    FUNC_0(3, "Seed = %u \n", VAR_11);
    if (VAR_8!=VAR_0) FUNC_0(3, "Compressibility : %i%%\n", (U32)(VAR_8*100));

    FUNC_1(VAR_10, VAR_8, VAR_9, VAR_11);
    FUNC_0(1, "\n");

    return 0;
}
