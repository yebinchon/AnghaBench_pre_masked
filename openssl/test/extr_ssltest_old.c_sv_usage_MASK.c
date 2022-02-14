
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    FUNC_0(VAR_0, "usage: ssltest [args ...]\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, " -server_auth  - check server certificate\n");
    FUNC_0(VAR_0, " -client_auth  - do client authentication\n");
    FUNC_0(VAR_0, " -v            - more output\n");
    FUNC_0(VAR_0, " -d            - debug output\n");
    FUNC_0(VAR_0, " -reuse        - use session-id reuse\n");
    FUNC_0(VAR_0, " -num <val>    - number of connections to perform\n");
    FUNC_0(VAR_0,
            " -bytes <val>  - number of bytes to swap between client/server\n");

    FUNC_0(VAR_0,
            " -dhe512       - use 512 bit key for DHE (to test failure)\n");
    FUNC_0(VAR_0,
            " -dhe1024      - use 1024 bit key (safe prime) for DHE (default, no-op)\n");
    FUNC_0(VAR_0,
            " -dhe1024dsa   - use 1024 bit key (with 160-bit subprime) for DHE\n");
    FUNC_0(VAR_0, " -no_dhe       - disable DHE\n");


    FUNC_0(VAR_0, " -no_ecdhe     - disable ECDHE\nTODO(openssl-team): no_ecdhe was broken by auto ecdh. Make this work again.\n");


    FUNC_0(VAR_0, " -psk arg      - PSK in hex (without 0x)\n");


    FUNC_0(VAR_0, " -ssl3         - use SSLv3\n");


    FUNC_0(VAR_0, " -tls1         - use TLSv1\n");


    FUNC_0(VAR_0, " -dtls         - use DTLS\n");

    FUNC_0(VAR_0, " -dtls1        - use DTLSv1\n");


    FUNC_0(VAR_0, " -dtls12       - use DTLSv1.2\n");


    FUNC_0(VAR_0, " -CApath arg   - PEM format directory of CA's\n");
    FUNC_0(VAR_0, " -CAfile arg   - PEM format file of CA's\n");
    FUNC_0(VAR_0, " -cert arg     - Server certificate file\n");
    FUNC_0(VAR_0,
            " -key arg      - Server key file (default: same as -cert)\n");
    FUNC_0(VAR_0, " -c_cert arg   - Client certificate file\n");
    FUNC_0(VAR_0,
            " -c_key arg    - Client key file (default: same as -c_cert)\n");
    FUNC_0(VAR_0, " -cipher arg   - The TLSv1.2 and below cipher list\n");
    FUNC_0(VAR_0, " -ciphersuites arg   - The TLSv1.3 ciphersuites\n");
    FUNC_0(VAR_0, " -bio_pair     - Use BIO pairs\n");
    FUNC_0(VAR_0, " -ipv4         - Use IPv4 connection on localhost\n");
    FUNC_0(VAR_0, " -ipv6         - Use IPv6 connection on localhost\n");
    FUNC_0(VAR_0, " -f            - Test even cases that can't work\n");
    FUNC_0(VAR_0,
            " -time         - measure processor time used by client and server\n");
    FUNC_0(VAR_0, " -zlib         - use zlib compression\n");

    FUNC_0(VAR_0, " -npn_client - have client side offer NPN\n");
    FUNC_0(VAR_0, " -npn_server - have server side offer NPN\n");
    FUNC_0(VAR_0, " -npn_server_reject - have server reject NPN\n");

    FUNC_0(VAR_0, " -serverinfo_file file - have server use this file\n");
    FUNC_0(VAR_0, " -serverinfo_sct  - have client offer and expect SCT\n");
    FUNC_0(VAR_0,
            " -serverinfo_tack - have client offer and expect TACK\n");
    FUNC_0(VAR_0,
            " -custom_ext - try various custom extension callbacks\n");
    FUNC_0(VAR_0, " -alpn_client <string> - have client side offer ALPN\n");
    FUNC_0(VAR_0, " -alpn_server <string> - have server side offer ALPN\n");
    FUNC_0(VAR_0, " -alpn_server1 <string> - alias for -alpn_server\n");
    FUNC_0(VAR_0, " -alpn_server2 <string> - have server side context 2 offer ALPN\n");
    FUNC_0(VAR_0,
            " -alpn_expected <string> - the ALPN protocol that should be negotiated\n");
    FUNC_0(VAR_0, " -server_min_proto <string> - Minimum version the server should support\n");
    FUNC_0(VAR_0, " -server_max_proto <string> - Maximum version the server should support\n");
    FUNC_0(VAR_0, " -client_min_proto <string> - Minimum version the client should support\n");
    FUNC_0(VAR_0, " -client_max_proto <string> - Maximum version the client should support\n");
    FUNC_0(VAR_0, " -should_negotiate <string> - The version that should be negotiated, fail-client or fail-server\n");

    FUNC_0(VAR_0, " -noct         - no certificate transparency\n");
    FUNC_0(VAR_0, " -requestct    - request certificate transparency\n");
    FUNC_0(VAR_0, " -requirect    - require certificate transparency\n");

    FUNC_0(VAR_0, " -sn_client <string>  - have client request this servername\n");
    FUNC_0(VAR_0, " -sn_server1 <string> - have server context 1 respond to this servername\n");
    FUNC_0(VAR_0, " -sn_server2 <string> - have server context 2 respond to this servername\n");
    FUNC_0(VAR_0, " -sn_expect1          - expected server 1\n");
    FUNC_0(VAR_0, " -sn_expect2          - expected server 2\n");
    FUNC_0(VAR_0, " -server_sess_out <file>    - Save the server session to a file\n");
    FUNC_0(VAR_0, " -server_sess_in <file>     - Read the server session from a file\n");
    FUNC_0(VAR_0, " -client_sess_out <file>    - Save the client session to a file\n");
    FUNC_0(VAR_0, " -client_sess_in <file>     - Read the client session from a file\n");
    FUNC_0(VAR_0, " -should_reuse <number>     - The expected state of reusing the session\n");
    FUNC_0(VAR_0, " -no_ticket    - do not issue TLS session ticket\n");
}
