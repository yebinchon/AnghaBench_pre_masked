
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ q_iter ;
typedef TYPE_3__* XMLRPC_VALUE ;
typedef scalar_t__ XMLRPC_CASE_COMPARISON ;
struct TYPE_7__ {scalar_t__ str; } ;
struct TYPE_9__ {TYPE_1__ id; TYPE_2__* v; } ;
struct TYPE_8__ {scalar_t__ q; } ;


 TYPE_3__* Q_Iter_Get_F (scalar_t__) ;
 scalar_t__ Q_Iter_Head_F (scalar_t__) ;
 scalar_t__ Q_Iter_Next_F (scalar_t__) ;
 int strcasecmp (scalar_t__,char const*) ;
 int strcmp (scalar_t__,char const*) ;
 scalar_t__ xmlrpc_case_insensitive ;
 scalar_t__ xmlrpc_case_sensitive ;

XMLRPC_VALUE XMLRPC_VectorGetValueWithID_Case (XMLRPC_VALUE vector, const char *id,
                 XMLRPC_CASE_COMPARISON id_case) {
   if(vector && vector->v && vector->v->q) {
       q_iter qi = Q_Iter_Head_F(vector->v->q);

       while(qi) {
          XMLRPC_VALUE xIter = Q_Iter_Get_F(qi);
          if(xIter && xIter->id.str) {
             if(id_case == xmlrpc_case_sensitive) {
                if(!strcmp(xIter->id.str, id)) {
                   return xIter;
                }
             }
             else if(id_case == xmlrpc_case_insensitive) {
                if(!strcasecmp(xIter->id.str, id)) {
                   return xIter;
                }
             }
          }
          qi = Q_Iter_Next_F(qi);
       }
   }
   return ((void*)0);
}
