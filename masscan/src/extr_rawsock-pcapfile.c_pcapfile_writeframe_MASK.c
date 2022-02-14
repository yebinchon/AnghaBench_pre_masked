
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PcapFile {scalar_t__ byte_order; char* filename; int * fp; int frame_number; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 unsigned int FUNC_2 (void const*,int,unsigned int,int *) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

void FUNC_4(
    struct PcapFile *VAR_2,
    const void *VAR_3,
    unsigned VAR_4,
    unsigned VAR_5,
    unsigned VAR_6,
    unsigned VAR_7)
{
    unsigned char VAR_8[16];

    if (VAR_2 == ((void*)0) || VAR_2->fp == ((void*)0))
        return;




    if (VAR_2->byte_order == VAR_0) {
        VAR_8[ 0] = (unsigned char)(VAR_6>>24);
        VAR_8[ 1] = (unsigned char)(VAR_6>>16);
        VAR_8[ 2] = (unsigned char)(VAR_6>> 8);
        VAR_8[ 3] = (unsigned char)(VAR_6>> 0);

        VAR_8[ 4] = (unsigned char)(VAR_7>>24);
        VAR_8[ 5] = (unsigned char)(VAR_7>>16);
        VAR_8[ 6] = (unsigned char)(VAR_7>> 8);
        VAR_8[ 7] = (unsigned char)(VAR_7>> 0);

        VAR_8[ 8] = (unsigned char)(VAR_4>>24);
        VAR_8[ 9] = (unsigned char)(VAR_4>>16);
        VAR_8[10] = (unsigned char)(VAR_4>> 8);
        VAR_8[11] = (unsigned char)(VAR_4>> 0);

        VAR_8[12] = (unsigned char)(VAR_5>>24);
        VAR_8[13] = (unsigned char)(VAR_5>>16);
        VAR_8[14] = (unsigned char)(VAR_5>> 8);
        VAR_8[15] = (unsigned char)(VAR_5>> 0);

    } else {
        VAR_8[ 0] = (unsigned char)(VAR_6>> 0);
        VAR_8[ 1] = (unsigned char)(VAR_6>> 8);
        VAR_8[ 2] = (unsigned char)(VAR_6>>16);
        VAR_8[ 3] = (unsigned char)(VAR_6>>24);

        VAR_8[ 4] = (unsigned char)(VAR_7>> 0);
        VAR_8[ 5] = (unsigned char)(VAR_7>> 8);
        VAR_8[ 6] = (unsigned char)(VAR_7>>16);
        VAR_8[ 7] = (unsigned char)(VAR_7>>24);

        VAR_8[ 8] = (unsigned char)(VAR_4>> 0);
        VAR_8[ 9] = (unsigned char)(VAR_4>> 8);
        VAR_8[10] = (unsigned char)(VAR_4>>16);
        VAR_8[11] = (unsigned char)(VAR_4>>24);

        VAR_8[12] = (unsigned char)(VAR_5>> 0);
        VAR_8[13] = (unsigned char)(VAR_5>> 8);
        VAR_8[14] = (unsigned char)(VAR_5>>16);
        VAR_8[15] = (unsigned char)(VAR_5>>24);

    }

    if (FUNC_2(VAR_8, 1, 16, VAR_2->fp) != 16) {
        FUNC_1(VAR_1, "%s:%d: could not write packet header\n",
            VAR_2->filename, VAR_2->frame_number);
        FUNC_3(VAR_2->filename);
        FUNC_0(VAR_2->fp);
        VAR_2->fp = ((void*)0);
    }

    if (FUNC_2(VAR_3, 1, VAR_4, VAR_2->fp) != VAR_4) {
        FUNC_1(VAR_1, "%s:%d: could not write packet contents\n",
            VAR_2->filename, VAR_2->frame_number);
        FUNC_3(VAR_2->filename);
        FUNC_0(VAR_2->fp);
        VAR_2->fp = ((void*)0);
    }
}
