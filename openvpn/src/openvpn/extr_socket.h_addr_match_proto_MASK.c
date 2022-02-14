
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openvpn_sockaddr {int dummy; } ;


 int FUNC_0 (struct openvpn_sockaddr const*,struct openvpn_sockaddr const*) ;
 int FUNC_1 (struct openvpn_sockaddr const*,struct openvpn_sockaddr const*) ;
 scalar_t__ FUNC_2 (int const) ;

__attribute__((used)) static inline bool
FUNC_3(const struct openvpn_sockaddr *VAR_0,
                 const struct openvpn_sockaddr *VAR_1,
                 const int VAR_2)
{
    return FUNC_2(VAR_2)
           ? FUNC_0(VAR_0, VAR_1)
           : FUNC_1(VAR_0, VAR_1);
}
