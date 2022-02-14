
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const SSL *VAR_1, int VAR_2, int VAR_3)
{
 switch (VAR_2)
 {
  case 130:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: handshake start")));
   break;
  case 131:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: handshake done")));
   break;
  case 134:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: accept loop")));
   break;
  case 135:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: accept exit (%d)", VAR_3)));
   break;
  case 132:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: connect loop")));
   break;
  case 133:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: connect exit (%d)", VAR_3)));
   break;
  case 129:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: read alert (0x%04x)", VAR_3)));
   break;
  case 128:
   FUNC_0(VAR_0,
     (FUNC_1("SSL: write alert (0x%04x)", VAR_3)));
   break;
 }
}
