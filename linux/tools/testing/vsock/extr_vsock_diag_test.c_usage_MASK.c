
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_1, "Usage: vsock_diag_test [--help] [--control-host=<host>] --control-port=<port> --mode=client|server --peer-cid=<cid>\n"
  "\n"
  "  Server: vsock_diag_test --control-port=1234 --mode=server --peer-cid=3\n"
  "  Client: vsock_diag_test --control-host=192.168.0.1 --control-port=1234 --mode=client --peer-cid=2\n"
  "\n"
  "Run vsock_diag.ko tests.  Must be launched in both\n"
  "guest and host.  One side must use --mode=client and\n"
  "the other side must use --mode=server.\n"
  "\n"
  "A TCP control socket connection is used to coordinate tests\n"
  "between the client and the server.  The server requires a\n"
  "listen address and the client requires an address to\n"
  "connect to.\n"
  "\n"
  "The CID of the other side must be given with --peer-cid=<cid>.\n");
 FUNC_0(VAR_0);
}
