
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int md5_word_t ;
struct TYPE_3__ {int* abcd; } ;
typedef TYPE_1__ md5_state_t ;
typedef int md5_byte_t ;


 int FUNC_0 (int,int,int,int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static void
FUNC_2(md5_state_t *VAR_64, const md5_byte_t *VAR_65 )
{
    md5_word_t
 VAR_66 = VAR_64->abcd[0], VAR_67 = VAR_64->abcd[1],
 VAR_68 = VAR_64->abcd[2], VAR_69 = VAR_64->abcd[3];
    md5_word_t VAR_70;





    md5_word_t VAR_71[16];
    const md5_word_t *VAR_72;


    {






 static const int VAR_73 = 1;

 if (*((const md5_byte_t *)&VAR_73))


 {




     if (!((VAR_65 - (const md5_byte_t *)0) & 3)) {

  VAR_72 = (const md5_word_t *)VAR_65;
     } else {

  FUNC_1(VAR_71, VAR_65, 64);
  VAR_72 = VAR_71;
     }
 }


 else


 {




     const md5_byte_t *VAR_74 = VAR_65;
     int VAR_75;


     VAR_72 = VAR_71;



     for (VAR_75 = 0; VAR_75 < 16; ++VAR_75, VAR_74 += 4)
  VAR_71[VAR_75] = VAR_74[0] + (VAR_74[1] << 8) + (VAR_74[2] << 16) + (VAR_74[3] << 24);
 }

    }
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_68)) | (~(VAR_67) & (VAR_69))) + VAR_72[0] + VAR_0; VAR_66 = (((VAR_70) << (7)) | ((VAR_70) >> (32 - (7)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_67)) | (~(VAR_66) & (VAR_68))) + VAR_72[1] + VAR_11; VAR_69 = (((VAR_70) << (12)) | ((VAR_70) >> (32 - (12)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_66)) | (~(VAR_69) & (VAR_67))) + VAR_72[2] + VAR_22; VAR_68 = (((VAR_70) << (17)) | ((VAR_70) >> (32 - (17)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_69)) | (~(VAR_68) & (VAR_66))) + VAR_72[3] + VAR_33; VAR_67 = (((VAR_70) << (22)) | ((VAR_70) >> (32 - (22)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_68)) | (~(VAR_67) & (VAR_69))) + VAR_72[4] + VAR_44; VAR_66 = (((VAR_70) << (7)) | ((VAR_70) >> (32 - (7)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_67)) | (~(VAR_66) & (VAR_68))) + VAR_72[5] + VAR_55; VAR_69 = (((VAR_70) << (12)) | ((VAR_70) >> (32 - (12)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_66)) | (~(VAR_69) & (VAR_67))) + VAR_72[6] + VAR_61; VAR_68 = (((VAR_70) << (17)) | ((VAR_70) >> (32 - (17)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_69)) | (~(VAR_68) & (VAR_66))) + VAR_72[7] + VAR_62; VAR_67 = (((VAR_70) << (22)) | ((VAR_70) >> (32 - (22)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_68)) | (~(VAR_67) & (VAR_69))) + VAR_72[8] + VAR_63; VAR_66 = (((VAR_70) << (7)) | ((VAR_70) >> (32 - (7)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_67)) | (~(VAR_66) & (VAR_68))) + VAR_72[9] + VAR_1; VAR_69 = (((VAR_70) << (12)) | ((VAR_70) >> (32 - (12)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_66)) | (~(VAR_69) & (VAR_67))) + VAR_72[10] + VAR_2; VAR_68 = (((VAR_70) << (17)) | ((VAR_70) >> (32 - (17)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_69)) | (~(VAR_68) & (VAR_66))) + VAR_72[11] + VAR_3; VAR_67 = (((VAR_70) << (22)) | ((VAR_70) >> (32 - (22)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_68)) | (~(VAR_67) & (VAR_69))) + VAR_72[12] + VAR_4; VAR_66 = (((VAR_70) << (7)) | ((VAR_70) >> (32 - (7)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_67)) | (~(VAR_66) & (VAR_68))) + VAR_72[13] + VAR_5; VAR_69 = (((VAR_70) << (12)) | ((VAR_70) >> (32 - (12)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_66)) | (~(VAR_69) & (VAR_67))) + VAR_72[14] + VAR_6; VAR_68 = (((VAR_70) << (17)) | ((VAR_70) >> (32 - (17)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_69)) | (~(VAR_68) & (VAR_66))) + VAR_72[15] + VAR_7; VAR_67 = (((VAR_70) << (22)) | ((VAR_70) >> (32 - (22)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_69)) | ((VAR_68) & ~(VAR_69))) + VAR_72[1] + VAR_8; VAR_66 = (((VAR_70) << (5)) | ((VAR_70) >> (32 - (5)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_68)) | ((VAR_67) & ~(VAR_68))) + VAR_72[6] + VAR_9; VAR_69 = (((VAR_70) << (9)) | ((VAR_70) >> (32 - (9)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_67)) | ((VAR_66) & ~(VAR_67))) + VAR_72[11] + VAR_10; VAR_68 = (((VAR_70) << (14)) | ((VAR_70) >> (32 - (14)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_66)) | ((VAR_69) & ~(VAR_66))) + VAR_72[0] + VAR_12; VAR_67 = (((VAR_70) << (20)) | ((VAR_70) >> (32 - (20)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_69)) | ((VAR_68) & ~(VAR_69))) + VAR_72[5] + VAR_13; VAR_66 = (((VAR_70) << (5)) | ((VAR_70) >> (32 - (5)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_68)) | ((VAR_67) & ~(VAR_68))) + VAR_72[10] + VAR_14; VAR_69 = (((VAR_70) << (9)) | ((VAR_70) >> (32 - (9)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_67)) | ((VAR_66) & ~(VAR_67))) + VAR_72[15] + VAR_15; VAR_68 = (((VAR_70) << (14)) | ((VAR_70) >> (32 - (14)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_66)) | ((VAR_69) & ~(VAR_66))) + VAR_72[4] + VAR_16; VAR_67 = (((VAR_70) << (20)) | ((VAR_70) >> (32 - (20)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_69)) | ((VAR_68) & ~(VAR_69))) + VAR_72[9] + VAR_17; VAR_66 = (((VAR_70) << (5)) | ((VAR_70) >> (32 - (5)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_68)) | ((VAR_67) & ~(VAR_68))) + VAR_72[14] + VAR_18; VAR_69 = (((VAR_70) << (9)) | ((VAR_70) >> (32 - (9)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_67)) | ((VAR_66) & ~(VAR_67))) + VAR_72[3] + VAR_19; VAR_68 = (((VAR_70) << (14)) | ((VAR_70) >> (32 - (14)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_66)) | ((VAR_69) & ~(VAR_66))) + VAR_72[8] + VAR_20; VAR_67 = (((VAR_70) << (20)) | ((VAR_70) >> (32 - (20)))) + VAR_68;
    VAR_70 = VAR_66 + (((VAR_67) & (VAR_69)) | ((VAR_68) & ~(VAR_69))) + VAR_72[13] + VAR_21; VAR_66 = (((VAR_70) << (5)) | ((VAR_70) >> (32 - (5)))) + VAR_67;
    VAR_70 = VAR_69 + (((VAR_66) & (VAR_68)) | ((VAR_67) & ~(VAR_68))) + VAR_72[2] + VAR_23; VAR_69 = (((VAR_70) << (9)) | ((VAR_70) >> (32 - (9)))) + VAR_66;
    VAR_70 = VAR_68 + (((VAR_69) & (VAR_67)) | ((VAR_66) & ~(VAR_67))) + VAR_72[7] + VAR_24; VAR_68 = (((VAR_70) << (14)) | ((VAR_70) >> (32 - (14)))) + VAR_69;
    VAR_70 = VAR_67 + (((VAR_68) & (VAR_66)) | ((VAR_69) & ~(VAR_66))) + VAR_72[12] + VAR_25; VAR_67 = (((VAR_70) << (20)) | ((VAR_70) >> (32 - (20)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_67) ^ (VAR_68) ^ (VAR_69)) + VAR_72[5] + VAR_26; VAR_66 = (((VAR_70) << (4)) | ((VAR_70) >> (32 - (4)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_66) ^ (VAR_67) ^ (VAR_68)) + VAR_72[8] + VAR_27; VAR_69 = (((VAR_70) << (11)) | ((VAR_70) >> (32 - (11)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_69) ^ (VAR_66) ^ (VAR_67)) + VAR_72[11] + VAR_28; VAR_68 = (((VAR_70) << (16)) | ((VAR_70) >> (32 - (16)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_68) ^ (VAR_69) ^ (VAR_66)) + VAR_72[14] + VAR_29; VAR_67 = (((VAR_70) << (23)) | ((VAR_70) >> (32 - (23)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_67) ^ (VAR_68) ^ (VAR_69)) + VAR_72[1] + VAR_30; VAR_66 = (((VAR_70) << (4)) | ((VAR_70) >> (32 - (4)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_66) ^ (VAR_67) ^ (VAR_68)) + VAR_72[4] + VAR_31; VAR_69 = (((VAR_70) << (11)) | ((VAR_70) >> (32 - (11)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_69) ^ (VAR_66) ^ (VAR_67)) + VAR_72[7] + VAR_32; VAR_68 = (((VAR_70) << (16)) | ((VAR_70) >> (32 - (16)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_68) ^ (VAR_69) ^ (VAR_66)) + VAR_72[10] + VAR_34; VAR_67 = (((VAR_70) << (23)) | ((VAR_70) >> (32 - (23)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_67) ^ (VAR_68) ^ (VAR_69)) + VAR_72[13] + VAR_35; VAR_66 = (((VAR_70) << (4)) | ((VAR_70) >> (32 - (4)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_66) ^ (VAR_67) ^ (VAR_68)) + VAR_72[0] + VAR_36; VAR_69 = (((VAR_70) << (11)) | ((VAR_70) >> (32 - (11)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_69) ^ (VAR_66) ^ (VAR_67)) + VAR_72[3] + VAR_37; VAR_68 = (((VAR_70) << (16)) | ((VAR_70) >> (32 - (16)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_68) ^ (VAR_69) ^ (VAR_66)) + VAR_72[6] + VAR_38; VAR_67 = (((VAR_70) << (23)) | ((VAR_70) >> (32 - (23)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_67) ^ (VAR_68) ^ (VAR_69)) + VAR_72[9] + VAR_39; VAR_66 = (((VAR_70) << (4)) | ((VAR_70) >> (32 - (4)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_66) ^ (VAR_67) ^ (VAR_68)) + VAR_72[12] + VAR_40; VAR_69 = (((VAR_70) << (11)) | ((VAR_70) >> (32 - (11)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_69) ^ (VAR_66) ^ (VAR_67)) + VAR_72[15] + VAR_41; VAR_68 = (((VAR_70) << (16)) | ((VAR_70) >> (32 - (16)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_68) ^ (VAR_69) ^ (VAR_66)) + VAR_72[2] + VAR_42; VAR_67 = (((VAR_70) << (23)) | ((VAR_70) >> (32 - (23)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_68) ^ ((VAR_67) | ~(VAR_69))) + VAR_72[0] + VAR_43; VAR_66 = (((VAR_70) << (6)) | ((VAR_70) >> (32 - (6)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_67) ^ ((VAR_66) | ~(VAR_68))) + VAR_72[7] + VAR_45; VAR_69 = (((VAR_70) << (10)) | ((VAR_70) >> (32 - (10)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_66) ^ ((VAR_69) | ~(VAR_67))) + VAR_72[14] + VAR_46; VAR_68 = (((VAR_70) << (15)) | ((VAR_70) >> (32 - (15)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_69) ^ ((VAR_68) | ~(VAR_66))) + VAR_72[5] + VAR_47; VAR_67 = (((VAR_70) << (21)) | ((VAR_70) >> (32 - (21)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_68) ^ ((VAR_67) | ~(VAR_69))) + VAR_72[12] + VAR_48; VAR_66 = (((VAR_70) << (6)) | ((VAR_70) >> (32 - (6)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_67) ^ ((VAR_66) | ~(VAR_68))) + VAR_72[3] + VAR_49; VAR_69 = (((VAR_70) << (10)) | ((VAR_70) >> (32 - (10)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_66) ^ ((VAR_69) | ~(VAR_67))) + VAR_72[10] + VAR_50; VAR_68 = (((VAR_70) << (15)) | ((VAR_70) >> (32 - (15)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_69) ^ ((VAR_68) | ~(VAR_66))) + VAR_72[1] + VAR_51; VAR_67 = (((VAR_70) << (21)) | ((VAR_70) >> (32 - (21)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_68) ^ ((VAR_67) | ~(VAR_69))) + VAR_72[8] + VAR_52; VAR_66 = (((VAR_70) << (6)) | ((VAR_70) >> (32 - (6)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_67) ^ ((VAR_66) | ~(VAR_68))) + VAR_72[15] + VAR_53; VAR_69 = (((VAR_70) << (10)) | ((VAR_70) >> (32 - (10)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_66) ^ ((VAR_69) | ~(VAR_67))) + VAR_72[6] + VAR_54; VAR_68 = (((VAR_70) << (15)) | ((VAR_70) >> (32 - (15)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_69) ^ ((VAR_68) | ~(VAR_66))) + VAR_72[13] + VAR_56; VAR_67 = (((VAR_70) << (21)) | ((VAR_70) >> (32 - (21)))) + VAR_68;
    VAR_70 = VAR_66 + ((VAR_68) ^ ((VAR_67) | ~(VAR_69))) + VAR_72[4] + VAR_57; VAR_66 = (((VAR_70) << (6)) | ((VAR_70) >> (32 - (6)))) + VAR_67;
    VAR_70 = VAR_69 + ((VAR_67) ^ ((VAR_66) | ~(VAR_68))) + VAR_72[11] + VAR_58; VAR_69 = (((VAR_70) << (10)) | ((VAR_70) >> (32 - (10)))) + VAR_66;
    VAR_70 = VAR_68 + ((VAR_66) ^ ((VAR_69) | ~(VAR_67))) + VAR_72[2] + VAR_59; VAR_68 = (((VAR_70) << (15)) | ((VAR_70) >> (32 - (15)))) + VAR_69;
    VAR_70 = VAR_67 + ((VAR_69) ^ ((VAR_68) | ~(VAR_66))) + VAR_72[9] + VAR_60; VAR_67 = (((VAR_70) << (21)) | ((VAR_70) >> (32 - (21)))) + VAR_68;





    VAR_64->abcd[0] += VAR_66;
    VAR_64->abcd[1] += VAR_67;
    VAR_64->abcd[2] += VAR_68;
    VAR_64->abcd[3] += VAR_69;
}
