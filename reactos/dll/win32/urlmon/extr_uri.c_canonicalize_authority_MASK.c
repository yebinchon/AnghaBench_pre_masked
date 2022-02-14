
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ username; scalar_t__ password; scalar_t__ is_relative; } ;
typedef TYPE_1__ parse_data ;
struct TYPE_12__ {int authority_start; int canon_len; int authority_len; int host_start; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static BOOL FUNC_3(const parse_data *VAR_2, Uri *VAR_3, DWORD VAR_4, BOOL VAR_5) {
    VAR_3->authority_start = VAR_3->canon_len;
    VAR_3->authority_len = 0;

    if(!FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_0;

    if(!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_0;

    if(!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_0;

    if(VAR_3->host_start != -1 || (VAR_2->is_relative && (VAR_2->password || VAR_2->username)))
        VAR_3->authority_len = VAR_3->canon_len - VAR_3->authority_start;
    else
        VAR_3->authority_start = -1;

    return VAR_1;
}
