
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int output_plugin_options; TYPE_1__* output_plugin_private; int context; } ;
struct TYPE_8__ {int output_type; } ;
struct TYPE_7__ {scalar_t__ protocol_version; int publications; int publication_names; int context; } ;
typedef TYPE_1__ PGOutputData ;
typedef TYPE_2__ OutputPluginOptions ;
typedef TYPE_3__ LogicalDecodingContext ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__*,int *) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_9(LogicalDecodingContext *VAR_12, OutputPluginOptions *VAR_13,
     bool VAR_14)
{
 PGOutputData *VAR_15 = FUNC_7(sizeof(PGOutputData));


 VAR_15->context = FUNC_0(VAR_12->context,
            "logical replication output context",
            VAR_0);

 VAR_12->output_plugin_private = VAR_15;


 VAR_13->output_type = VAR_8;






 if (!VAR_14)
 {

  FUNC_8(VAR_12->output_plugin_options,
        &VAR_15->protocol_version,
        &VAR_15->publication_names);


  if (VAR_15->protocol_version > VAR_6)
   FUNC_2(VAR_4,
     (FUNC_3(VAR_2),
      FUNC_4("client sent proto_version=%d but we only support protocol %d or lower",
       VAR_15->protocol_version, VAR_6)));

  if (VAR_15->protocol_version < VAR_5)
   FUNC_2(VAR_4,
     (FUNC_3(VAR_2),
      FUNC_4("client sent proto_version=%d but we only support protocol %d or higher",
       VAR_15->protocol_version, VAR_5)));

  if (FUNC_6(VAR_15->publication_names) < 1)
   FUNC_2(VAR_4,
     (FUNC_3(VAR_3),
      FUNC_4("publication_names parameter missing")));


  VAR_15->publications = VAR_7;
  VAR_11 = 0;
  FUNC_1(VAR_9,
           VAR_10,
           (Datum) 0);


  FUNC_5(VAR_1);
 }
}
