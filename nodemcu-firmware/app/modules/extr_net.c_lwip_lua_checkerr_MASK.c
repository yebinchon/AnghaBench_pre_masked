
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int err_t ;
 int FUNC_0 (int *,char*) ;

int FUNC_1 (lua_State *VAR_0, err_t VAR_1) {
  switch (VAR_1) {
    case 134: return 0;
    case 135: return FUNC_0(VAR_0, "out of memory");
    case 141: return FUNC_0(VAR_0, "buffer error");
    case 131: return FUNC_0(VAR_0, "timeout");
    case 132: return FUNC_0(VAR_0, "routing problem");
    case 137: return FUNC_0(VAR_0, "in progress");
    case 129: return FUNC_0(VAR_0, "illegal value");
    case 128: return FUNC_0(VAR_0, "would block");
    case 143: return FUNC_0(VAR_0, "connection aborted");
    case 133: return FUNC_0(VAR_0, "connection reset");
    case 140: return FUNC_0(VAR_0, "connection closed");
    case 139: return FUNC_0(VAR_0, "not connected");
    case 142: return FUNC_0(VAR_0, "illegal argument");
    case 130: return FUNC_0(VAR_0, "address in use");
    case 138: return FUNC_0(VAR_0, "netif error");
    case 136: return FUNC_0(VAR_0, "already connected");
    default: return FUNC_0(VAR_0, "unknown error");
  }
}
