
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
 case 132: VAR_1 = L"none               "; break;
 case 148: VAR_1 = L"crc32              "; break;
 case 136: VAR_1 = L"md4                "; break;
 case 140: VAR_1 = L"krb_des_mac        "; break;
 case 139: VAR_1 = L"krb_des_mac_k      "; break;
 case 135: VAR_1 = L"md5                "; break;
 case 134: VAR_1 = L"md5_des            "; break;
 case 128: VAR_1 = L"sha1_new           "; break;
 case 144: VAR_1 = L"hmac_sha1_aes128   "; break;
 case 142: VAR_1 = L"hmac_sha1_aes256   "; break;
 case 138: VAR_1 = L"lm                 "; break;
 case 129: VAR_1 = L"sha1               "; break;
 case 130: VAR_1 = L"real_crc32         "; break;
 case 147: VAR_1 = L"dec_mac            "; break;
 case 146: VAR_1 = L"dec_mac_md5        "; break;
 case 137: VAR_1 = L"md25               "; break;
 case 131: VAR_1 = L"rc4_md5            "; break;
 case 133: VAR_1 = L"md5_hmac           "; break;
 case 145: VAR_1 = L"hmac_md5           "; break;
 case 143: VAR_1 = L"hmac_sha1_aes128_ki"; break;
 case 141: VAR_1 = L"hmac_sha1_aes256_ki"; break;
 default: VAR_1 = L"unknow             "; break;
 }
 return VAR_1;
}
