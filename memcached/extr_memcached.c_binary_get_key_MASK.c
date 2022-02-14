
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* keylen; } ;
struct TYPE_6__ {TYPE_1__ request; } ;
struct TYPE_7__ {char* rcurr; TYPE_2__ binary_header; } ;
typedef TYPE_3__ conn ;



__attribute__((used)) static char* FUNC_0(conn *VAR_0) {
    return VAR_0->rcurr - (VAR_0->binary_header.request.keylen);
}
