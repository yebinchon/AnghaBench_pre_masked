
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PCWCHAR ;
typedef int LONG ;
PCWCHAR FUNC_0(LONG VAR_0)
{
 PCWCHAR VAR_1;
 switch(VAR_0)
 {
 case 140: VAR_1 = L"null             "; break;
 case 141: VAR_1 = L"des_plain        "; break;
 case 145: VAR_1 = L"des_cbc_crc      "; break;
 case 144: VAR_1 = L"des_cbc_md4      "; break;
 case 143: VAR_1 = L"des_cbc_md5      "; break;
 case 142: VAR_1 = L"des_cbc_md5_nt   "; break;
 case 133: VAR_1 = L"rc4_plain        "; break;
 case 132: VAR_1 = L"rc4_plain2       "; break;
 case 131: VAR_1 = L"rc4_plain_exp    "; break;
 case 135: VAR_1 = L"rc4_lm           "; break;
 case 134: VAR_1 = L"rc4_md4          "; break;
 case 128: VAR_1 = L"rc4_sha          "; break;
 case 139: VAR_1 = L"rc4_hmac_nt      "; break;
 case 138: VAR_1 = L"rc4_hmac_nt_exp  "; break;
 case 130: VAR_1 = L"rc4_plain_old    "; break;
 case 129: VAR_1 = L"rc4_plain_old_exp"; break;
 case 137: VAR_1 = L"rc4_hmac_old     "; break;
 case 136: VAR_1 = L"rc4_hmac_old_exp "; break;
 case 148: VAR_1 = L"aes128_hmac_plain"; break;
 case 146: VAR_1 = L"aes256_hmac_plain"; break;
 case 149: VAR_1 = L"aes128_hmac      "; break;
 case 147: VAR_1 = L"aes256_hmac      "; break;
 default: VAR_1 = L"unknow           "; break;
 }
 return VAR_1;
}
