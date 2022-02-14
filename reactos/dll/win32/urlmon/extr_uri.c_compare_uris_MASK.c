
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ scheme_type; int authority_start; int scheme_start; scalar_t__ scheme_len; char* canon_uri; int userinfo_start; scalar_t__ userinfo_len; int host_start; scalar_t__ host_len; scalar_t__ port; int path_start; scalar_t__ path_len; int query_start; scalar_t__ query_len; int fragment_start; scalar_t__ fragment_len; scalar_t__ has_port; } ;
typedef TYPE_1__ Uri ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,int*) ;

__attribute__((used)) static HRESULT FUNC_4(const Uri *VAR_5, const Uri *VAR_6, BOOL *VAR_7) {
    const BOOL VAR_8 = VAR_5->scheme_type != VAR_4;
    const BOOL VAR_9 = VAR_5->authority_start > -1 && VAR_6->authority_start > -1;
    HRESULT VAR_10;

    *VAR_7 = VAR_0;

    if(VAR_5->scheme_type != VAR_6->scheme_type)
        return VAR_1;


    if(!VAR_8) {
        if((VAR_5->scheme_start > -1 && VAR_6->scheme_start > -1) &&
           (VAR_5->scheme_len == VAR_6->scheme_len)) {

            if(FUNC_2(VAR_5->canon_uri+VAR_5->scheme_start, VAR_6->canon_uri+VAR_6->scheme_start, VAR_5->scheme_len))
                return VAR_1;
        } else if(VAR_5->scheme_len != VAR_6->scheme_len)

            return VAR_1;
    }


    if((VAR_5->userinfo_start > -1 && VAR_6->userinfo_start > -1) &&
       (VAR_5->userinfo_len == VAR_6->userinfo_len)) {
        if(FUNC_2(VAR_5->canon_uri+VAR_5->userinfo_start, VAR_6->canon_uri+VAR_6->userinfo_start, VAR_5->userinfo_len))
            return VAR_1;
    } else if(VAR_5->userinfo_len != VAR_6->userinfo_len)

        return VAR_1;


    if((VAR_5->host_start > -1 && VAR_6->host_start > -1) &&
       (VAR_5->host_len == VAR_6->host_len)) {

        if(VAR_8) {
            if(FUNC_1(VAR_5->canon_uri+VAR_5->host_start, VAR_6->canon_uri+VAR_6->host_start, VAR_5->host_len))
                return VAR_1;
        } else if(FUNC_2(VAR_5->canon_uri+VAR_5->host_start, VAR_6->canon_uri+VAR_6->host_start, VAR_5->host_len))
            return VAR_1;
    } else if(VAR_5->host_len != VAR_6->host_len)

        return VAR_1;

    if(VAR_5->has_port && VAR_6->has_port) {
        if(VAR_5->port != VAR_6->port)
            return VAR_1;
    } else if(VAR_5->has_port || VAR_6->has_port)

        return VAR_1;







    if(VAR_5->scheme_type == VAR_3) {
        BOOL VAR_11;

        VAR_10 = FUNC_3(VAR_5, VAR_6, &VAR_11);
        if(FUNC_0(VAR_10) || !VAR_11)
            return VAR_10;
    } else if((VAR_5->path_start > -1 && VAR_6->path_start > -1) &&
       (VAR_5->path_len == VAR_6->path_len)) {
        if(FUNC_2(VAR_5->canon_uri+VAR_5->path_start, VAR_6->canon_uri+VAR_6->path_start, VAR_5->path_len))
            return VAR_1;
    } else if(VAR_9 && VAR_5->path_len == -1 && VAR_6->path_len == 0) {
        if(*(VAR_5->canon_uri+VAR_5->path_start) != '/')
            return VAR_1;
    } else if(VAR_9 && VAR_6->path_len == 1 && VAR_5->path_len == 0) {
        if(*(VAR_6->canon_uri+VAR_6->path_start) != '/')
            return VAR_1;
    } else if(VAR_5->path_len != VAR_6->path_len)
        return VAR_1;


    if((VAR_5->query_start > -1 && VAR_6->query_start > -1) &&
       (VAR_5->query_len == VAR_6->query_len)) {
        if(FUNC_2(VAR_5->canon_uri+VAR_5->query_start, VAR_6->canon_uri+VAR_6->query_start, VAR_5->query_len))
            return VAR_1;
    } else if(VAR_5->query_len != VAR_6->query_len)
        return VAR_1;

    if((VAR_5->fragment_start > -1 && VAR_6->fragment_start > -1) &&
       (VAR_5->fragment_len == VAR_6->fragment_len)) {
        if(FUNC_2(VAR_5->canon_uri+VAR_5->fragment_start, VAR_6->canon_uri+VAR_6->fragment_start, VAR_5->fragment_len))
            return VAR_1;
    } else if(VAR_5->fragment_len != VAR_6->fragment_len)
        return VAR_1;


    *VAR_7 = VAR_2;
    return VAR_1;
}
