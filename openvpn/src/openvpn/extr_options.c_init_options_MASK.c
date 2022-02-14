
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int txqueuelen; int dhcp_lease_time; scalar_t__ dhcp_masq_offset; int ip_win32_type; } ;
struct TYPE_3__ {int bind_ipv6_only; int connect_retry_seconds; int connect_retry_seconds_max; int connect_timeout; int bind_local; int mtu_discover_type; int mssfix; int link_mtu; int tun_mtu; int remote_port; int local_port; int af; int proto; } ;
struct options {int gc_owned; int verbosity; int status_file_update_freq; int status_file_version; int route_delay_window; int resolve_in_advance; int proto_force; int occ; int management_log_history_cache; int management_echo_buffer_size; int management_state_buffer_size; int persist_mode; int block_outside_dns; int wintun; int vlan_pvid; int real_hash_size; int virtual_hash_size; int n_bcast_buf; int tcp_queue_limit; int max_clients; int max_routes_per_client; int ifconfig_pool_persist_refresh_freq; int scheduled_exit_interval; char* ciphername; int ncp_enabled; char* ncp_ciphers; char* authname; char* prng_hash; int prng_nonce_secret_len; int replay; int use_prediction_resistance; int key_method; int tls_timeout; int renegotiate_bytes; int renegotiate_seconds; int renegotiate_seconds_min; int handshake_window; int transition_window; int pkcs11_pin_cache_period; int auth_token_generate; char* tmp_dir; int allow_recursive_routing; int x509_username_field; int * ecdh_curve; int * tls_cert_profile; int key_direction; int replay_time; int replay_window; scalar_t__ stale_routes_check_interval; int vlan_accept; int route_method; TYPE_2__ tuntap_options; int resolve_retry_seconds; TYPE_1__ ce; scalar_t__ connect_retry_max; int topology; int mode; int gc; } ;


 int VAR_0 ;
 int FUNC_0 (struct options) ;
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
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 () ;

void
FUNC_4(struct options *VAR_17, const bool VAR_18)
{
    FUNC_0(*VAR_17);
    if (VAR_18)
    {
        FUNC_1(&VAR_17->gc);
        VAR_17->gc_owned = 1;
    }
    VAR_17->mode = VAR_7;
    VAR_17->topology = VAR_13;
    VAR_17->ce.proto = VAR_10;
    VAR_17->ce.af = VAR_0;
    VAR_17->ce.bind_ipv6_only = 0;
    VAR_17->ce.connect_retry_seconds = 5;
    VAR_17->ce.connect_retry_seconds_max = 300;
    VAR_17->ce.connect_timeout = 120;
    VAR_17->connect_retry_max = 0;
    VAR_17->ce.local_port = VAR_17->ce.remote_port = VAR_9;
    VAR_17->verbosity = 1;
    VAR_17->status_file_update_freq = 60;
    VAR_17->status_file_version = 1;
    VAR_17->ce.bind_local = 1;
    VAR_17->ce.tun_mtu = VAR_14;
    VAR_17->ce.link_mtu = VAR_6;
    VAR_17->ce.mtu_discover_type = -1;
    VAR_17->ce.mssfix = VAR_8;
    VAR_17->route_delay_window = 30;
    VAR_17->resolve_retry_seconds = VAR_11;
    VAR_17->resolve_in_advance = 0;
    VAR_17->proto_force = -1;
    VAR_17->vlan_accept = VAR_15;
    VAR_17->vlan_pvid = 1;
    VAR_17->ciphername = "BF-CBC";



    VAR_17->ncp_enabled = 0;

    VAR_17->ncp_ciphers = "AES-256-GCM:AES-128-GCM";
    VAR_17->authname = "SHA1";
    VAR_17->prng_hash = "SHA1";
    VAR_17->prng_nonce_secret_len = 16;
    VAR_17->replay = 1;
    VAR_17->replay_window = VAR_1;
    VAR_17->replay_time = VAR_2;
    VAR_17->key_direction = VAR_5;



    VAR_17->key_method = 2;
    VAR_17->tls_timeout = 2;
    VAR_17->renegotiate_bytes = -1;
    VAR_17->renegotiate_seconds = 3600;
    VAR_17->renegotiate_seconds_min = -1;
    VAR_17->handshake_window = 60;
    VAR_17->transition_window = 3600;
    VAR_17->tls_cert_profile = ((void*)0);
    VAR_17->ecdh_curve = ((void*)0);
    VAR_17->allow_recursive_routing = 0;
}
