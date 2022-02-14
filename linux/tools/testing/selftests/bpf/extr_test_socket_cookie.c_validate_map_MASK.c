
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_cookie {int cookie_value; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;
typedef int __u32 ;


 int FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (int,int*,struct socket_cookie*) ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bpf_map *VAR_0, int VAR_1)
{
 __u32 VAR_2;
 struct sockaddr_in6 VAR_3;
 socklen_t VAR_4 = sizeof(VAR_3);
 struct socket_cookie VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 if (!VAR_0) {
  FUNC_3("Map not found in BPF object");
  goto err;
 }

 VAR_7 = FUNC_0(VAR_0);

 VAR_6 = FUNC_1(VAR_7, &VAR_1, &VAR_5);

 VAR_6 = FUNC_2(VAR_1, (struct sockaddr *)&VAR_3, &VAR_4);
 if (VAR_6) {
  FUNC_3("Can't get client local addr");
  goto out;
 }

 VAR_2 = (FUNC_4(VAR_3.sin6_port) << 8) | 0xFF;
 if (VAR_5.cookie_value != VAR_2) {
  FUNC_3("Unexpected value in map: %x != %x", VAR_5.cookie_value,
   VAR_2);
  goto err;
 }

 goto out;
err:
 VAR_6 = -1;
out:
 return VAR_6;
}
