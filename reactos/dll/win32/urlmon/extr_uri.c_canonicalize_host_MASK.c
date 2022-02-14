
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int host_type; int host_len; scalar_t__ host; int scheme_type; } ;
typedef TYPE_1__ parse_data ;
typedef int WCHAR ;
struct TYPE_14__ {int host_start; int host_len; int domain_offset; int host_type; int canon_len; int canon_uri; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_1 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_4 (int,scalar_t__,int) ;

__attribute__((used)) static BOOL FUNC_5(const parse_data *VAR_3, Uri *VAR_4, DWORD VAR_5, BOOL VAR_6) {
    VAR_4->host_start = -1;
    VAR_4->host_len = 0;
    VAR_4->domain_offset = -1;

    if(VAR_3->host) {
        switch(VAR_3->host_type) {
        case 131:
            VAR_4->host_type = 131;
            if(!FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6))
                return VAR_0;

            break;
        case 130:
            VAR_4->host_type = 130;
            if(!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6))
                return VAR_0;

            break;
        case 129:
            if(!FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6))
                return VAR_0;

            VAR_4->host_type = 129;
            break;
        case 128:
            if(VAR_3->host_len > 0 || VAR_3->scheme_type != VAR_2) {
                VAR_4->host_start = VAR_4->canon_len;


                if(!VAR_6)
                    FUNC_4(VAR_4->canon_uri+VAR_4->canon_len, VAR_3->host, VAR_3->host_len*sizeof(WCHAR));
                VAR_4->canon_len += VAR_3->host_len;
                VAR_4->host_len = VAR_3->host_len;
            }

            VAR_4->host_type = 128;
            break;
        default:
            FUNC_0("(%p %p %x %d): Canonicalization for host type %d not supported.\n", VAR_3,
                    VAR_4, VAR_5, VAR_6, VAR_3->host_type);
            return VAR_0;
       }
   }

   return VAR_1;
}
