
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int state; size_t struct_length; size_t offset; } ;
struct TYPE_4__ {TYPE_1__ smb2; } ;
struct SMBSTUFF {TYPE_2__ hdr; } ;
typedef unsigned char const BannerOutput ;


 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static size_t
FUNC_1(struct SMBSTUFF *VAR_0, const unsigned char *VAR_1, size_t VAR_2, size_t VAR_3, struct BannerOutput *VAR_4)
{
    size_t VAR_5 = VAR_2;
    unsigned VAR_6 = VAR_0->hdr.smb2.state;

    FUNC_0(VAR_4);
    FUNC_0(VAR_1);

    if (VAR_3 > VAR_2 + (VAR_0->hdr.smb2.struct_length - VAR_0->hdr.smb2.offset))
        VAR_3 = VAR_2 + (VAR_0->hdr.smb2.struct_length - VAR_0->hdr.smb2.offset);

    for (;VAR_2<VAR_3; VAR_2++)
        switch (VAR_6) {
            default:
                break;
        }

    VAR_0->hdr.smb2.state = (unsigned short)VAR_6;
    VAR_0->hdr.smb2.offset += (unsigned short)(VAR_2 - VAR_5);
    return VAR_2 - VAR_5;
}
