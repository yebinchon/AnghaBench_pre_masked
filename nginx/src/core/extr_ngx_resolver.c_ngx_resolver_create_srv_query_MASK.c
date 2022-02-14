
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_11__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_12__ {int log; } ;
typedef TYPE_2__ ngx_resolver_t ;
struct TYPE_13__ {int class_lo; scalar_t__ class_hi; int type_lo; scalar_t__ type_hi; } ;
typedef TYPE_3__ ngx_resolver_qs_t ;
struct TYPE_14__ {char* query; scalar_t__ qlen; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_15__ {char ident_hi; char ident_lo; int flags_hi; int nqs_lo; scalar_t__ nar_lo; scalar_t__ nar_hi; scalar_t__ nns_lo; scalar_t__ nns_hi; scalar_t__ nan_lo; scalar_t__ nan_hi; scalar_t__ nqs_hi; scalar_t__ flags_lo; } ;
typedef TYPE_5__ ngx_resolver_hdr_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_1__*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_resolver_t *VAR_5, ngx_resolver_node_t *VAR_6,
    ngx_str_t *VAR_7)
{
    u_char *VAR_8, *VAR_9;
    size_t VAR_10, VAR_11;
    ngx_uint_t VAR_12;
    ngx_resolver_qs_t *VAR_13;
    ngx_resolver_hdr_t *VAR_14;

    VAR_11 = VAR_7->len ? (1 + VAR_7->len + 1) : 1;

    VAR_10 = sizeof(ngx_resolver_hdr_t) + VAR_11 + sizeof(ngx_resolver_qs_t);

    VAR_8 = FUNC_2(VAR_5, VAR_10);
    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    VAR_6->qlen = (u_short) VAR_10;
    VAR_6->query = VAR_8;

    VAR_14 = (ngx_resolver_hdr_t *) VAR_8;

    VAR_12 = FUNC_1();

    FUNC_0(VAR_2, VAR_5->log, 0,
                   "resolve: \"%V\" SRV %i", VAR_7, VAR_12 & 0xffff);

    VAR_14->ident_hi = (u_char) ((VAR_12 >> 8) & 0xff);
    VAR_14->ident_lo = (u_char) (VAR_12 & 0xff);


    VAR_14->flags_hi = 1; VAR_14->flags_lo = 0;


    VAR_14->nqs_hi = 0; VAR_14->nqs_lo = 1;
    VAR_14->nan_hi = 0; VAR_14->nan_lo = 0;
    VAR_14->nns_hi = 0; VAR_14->nns_lo = 0;
    VAR_14->nar_hi = 0; VAR_14->nar_lo = 0;

    VAR_8 += sizeof(ngx_resolver_hdr_t) + VAR_11;

    VAR_13 = (ngx_resolver_qs_t *) VAR_8;


    VAR_13->type_hi = 0; VAR_13->type_lo = VAR_4;


    VAR_13->class_hi = 0; VAR_13->class_lo = 1;



    VAR_10 = 0;
    VAR_8--;
    *VAR_8-- = '\0';

    if (VAR_7->len == 0) {
        return VAR_0;
    }

    for (VAR_9 = VAR_7->data + VAR_7->len - 1; VAR_9 >= VAR_7->data; VAR_9--) {
        if (*VAR_9 != '.') {
            *VAR_8 = *VAR_9;
            VAR_10++;

        } else {
            if (VAR_10 == 0 || VAR_10 > 255) {
                return VAR_0;
            }

            *VAR_8 = (u_char) VAR_10;
            VAR_10 = 0;
        }

        VAR_8--;
    }

    if (VAR_10 == 0 || VAR_10 > 255) {
        return VAR_0;
    }

    *VAR_8 = (u_char) VAR_10;

    return VAR_3;
}
