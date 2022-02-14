
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mssfix_default; } ;
struct options {scalar_t__ proto_force; char* tls_auth_file_inline; char* tls_crypt_inline; int gc; scalar_t__ persist_key; int tls_crypt_v2_inline; scalar_t__ tls_crypt_v2_file; void* tls_crypt_file; int key_direction; void* tls_auth_file; TYPE_1__ ce; scalar_t__ client; scalar_t__ server_bridge_proxy_dhcp; scalar_t__ server_bridge_defined; scalar_t__ server_defined; int dev_type; int dev; } ;
struct connection_entry {scalar_t__ proto; int bind_local; scalar_t__ af; int tun_mtu_defined; int tun_mtu_extra_defined; char* tls_auth_file_inline; char* tls_crypt_inline; void* tls_crypt_file; void* tls_auth_file; int tls_crypt_v2_inline; scalar_t__ tls_crypt_v2_file; int key_direction; int tun_mtu_extra; int link_mtu_defined; scalar_t__ socks_proxy_server; scalar_t__ fragment; scalar_t__ mssfix; int flags; int * local_port; int bind_defined; int local_port_defined; int local; } ;
struct buffer {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct buffer*) ;
 struct buffer FUNC_1 (void*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct options *VAR_13, struct connection_entry *VAR_14)
{
    const int VAR_15 = FUNC_2(VAR_13->dev, VAR_13->dev_type);
    if (VAR_14->proto == VAR_9 && !VAR_14->local && !VAR_14->local_port_defined && !VAR_14->bind_defined)
    {
        VAR_14->bind_local = 0;
    }

    if (VAR_14->proto == VAR_11 && VAR_14->socks_proxy_server && !VAR_14->local && !VAR_14->local_port_defined && !VAR_14->bind_defined)
    {
        VAR_14->bind_local = 0;
    }

    if (!VAR_14->bind_local)
    {
        VAR_14->local_port = ((void*)0);
    }


    if (VAR_13->proto_force >= 0 && VAR_13->proto_force != VAR_14->proto)
    {
        VAR_14->flags |= VAR_2;
    }





    if (VAR_13->ce.mssfix_default)
    {






        FUNC_3(VAR_7, "--mssfix must specify a parameter");

    }




    if (VAR_14->socks_proxy_server && FUNC_4(VAR_14->proto) && VAR_14->af != VAR_0)
    {
        if (VAR_14->af == VAR_1)
        {
            FUNC_3(VAR_6, "WARNING: '--proto udp6' is not compatible with "
                "'--socks-proxy' today.  Forcing IPv4 mode." );
        }
        else
        {
            FUNC_3(VAR_6, "NOTICE: dual-stack mode for '--proto udp' does not "
                "work correctly with '--socks-proxy' today.  Forcing IPv4." );
        }
        VAR_14->af = VAR_0;
    }




    {
        if (!VAR_14->tun_mtu_defined && !VAR_14->link_mtu_defined)
        {
            VAR_14->tun_mtu_defined = 1;
        }
        if ((VAR_15 == VAR_3) && !VAR_14->tun_mtu_extra_defined)
        {
            VAR_14->tun_mtu_extra_defined = 1;
            VAR_14->tun_mtu_extra = VAR_12;
        }
    }







    if (!VAR_14->tls_auth_file && !VAR_14->tls_crypt_file && !VAR_14->tls_crypt_v2_file)
    {
        VAR_14->tls_auth_file = VAR_13->tls_auth_file;
        VAR_14->tls_auth_file_inline = VAR_13->tls_auth_file_inline;
        VAR_14->key_direction = VAR_13->key_direction;

        VAR_14->tls_crypt_file = VAR_13->tls_crypt_file;
        VAR_14->tls_crypt_inline = VAR_13->tls_crypt_inline;

        VAR_14->tls_crypt_v2_file = VAR_13->tls_crypt_v2_file;
        VAR_14->tls_crypt_v2_inline = VAR_13->tls_crypt_v2_inline;
    }




    if (VAR_13->persist_key)
    {
        if (VAR_14->tls_auth_file && !VAR_14->tls_auth_file_inline)
        {
            struct buffer VAR_16 = FUNC_1(VAR_14->tls_auth_file, &VAR_13->gc);
            if (!FUNC_0(&VAR_16))
            {
                FUNC_3(VAR_5, "Cannot pre-load tls-auth keyfile (%s)",
                    VAR_14->tls_auth_file);
            }

            VAR_14->tls_auth_file = VAR_4;
            VAR_14->tls_auth_file_inline = (char *)VAR_16.data;
        }

        if (VAR_14->tls_crypt_file && !VAR_14->tls_crypt_inline)
        {
            struct buffer VAR_17 = FUNC_1(VAR_14->tls_crypt_file, &VAR_13->gc);
            if (!FUNC_0(&VAR_17))
            {
                FUNC_3(VAR_5, "Cannot pre-load tls-crypt keyfile (%s)",
                    VAR_14->tls_crypt_file);
            }

            VAR_14->tls_crypt_file = VAR_4;
            VAR_14->tls_crypt_inline = (char *)VAR_17.data;
        }
    }
}
