
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char* FUNC_0(int VAR_0) {
    switch(VAR_0) {
    case 129: return "RPCSEC_SSPI_SVC_NONE";
    case 130: return "RPCSEC_SSPI_SVC_INTEGRITY";
    case 128: return "RPCSEC_SSPI_SVC_PRIVACY";
    default: return "invalid gss auth type";
    }
}
