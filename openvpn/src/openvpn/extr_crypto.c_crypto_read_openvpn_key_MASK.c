
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key_direction_state {int need_keys; } ;
struct key_ctx_bi {int dummy; } ;
struct key2 {int n; } ;
typedef int key2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key_ctx_bi*,struct key2*,int const,struct key_type const*,char const*) ;
 int FUNC_1 (struct key_direction_state*,int const) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*,char const*,struct key2*,int ) ;
 int FUNC_4 (struct key2*,char const*,int) ;
 int FUNC_5 (struct key2*,int) ;
 int FUNC_6 (struct key2*,struct key_type const*,char const*) ;

void
FUNC_7(const struct key_type *VAR_3,
                        struct key_ctx_bi *VAR_4, const char *VAR_5, const char *VAR_6,
                        const int VAR_7, const char *VAR_8, const char *VAR_9)
{
    struct key2 VAR_10;
    struct key_direction_state VAR_11;

    if (VAR_6)
    {
        FUNC_4(&VAR_10, VAR_6, VAR_2|VAR_1);
    }
    else
    {
        FUNC_4(&VAR_10, VAR_5, VAR_2);
    }

    if (VAR_10 != 2)
    {
        FUNC_2(VAR_0, "File '%s' does not have OpenVPN Static Key format.  Using "
            "free-form passphrase file is not supported anymore.", VAR_5);
    }


    FUNC_6(&VAR_10, VAR_3, VAR_5);


    FUNC_1(&VAR_11, VAR_7);
    FUNC_3(VAR_5, VAR_9, &VAR_10, VAR_11.need_keys);


    FUNC_0(VAR_4, &VAR_10, VAR_7, VAR_3, VAR_8);
    FUNC_5(&VAR_10, sizeof(VAR_10));
}
