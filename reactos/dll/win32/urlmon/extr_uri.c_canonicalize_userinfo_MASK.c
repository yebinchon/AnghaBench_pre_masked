
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int password; int username; } ;
typedef TYPE_1__ parse_data ;
struct TYPE_12__ {int userinfo_start; int userinfo_split; size_t userinfo_len; size_t canon_len; char* canon_uri; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,int ,int ,size_t,int ,int,size_t) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static BOOL FUNC_4(const parse_data *VAR_2, Uri *VAR_3, DWORD VAR_4, BOOL VAR_5) {
    VAR_3->userinfo_start = VAR_3->userinfo_split = -1;
    VAR_3->userinfo_len = 0;

    if(!VAR_2->username && !VAR_2->password)

        return VAR_1;

    if(!FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_0;

    if(!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_0;

    VAR_3->userinfo_len = VAR_3->canon_len - VAR_3->userinfo_start;
    if(!VAR_5)
        FUNC_0("(%p %p %x %d): Canonicalized userinfo, userinfo_start=%d, userinfo=%s, userinfo_split=%d userinfo_len=%d.\n",
                VAR_2, VAR_3, VAR_4, VAR_5, VAR_3->userinfo_start, FUNC_3(VAR_3->canon_uri + VAR_3->userinfo_start, VAR_3->userinfo_len),
                VAR_3->userinfo_split, VAR_3->userinfo_len);


    if(!VAR_5)
        VAR_3->canon_uri[VAR_3->canon_len] = '@';
    ++VAR_3->canon_len;

    return VAR_1;
}
