
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float OffsetFactor; float OffsetUnits; scalar_t__ OffsetFill; scalar_t__ OffsetLine; scalar_t__ OffsetPoint; } ;
struct TYPE_5__ {float PointZoffset; float LineZoffset; float PolygonZoffset; TYPE_1__ Polygon; } ;
typedef float GLfloat ;
typedef TYPE_2__ GLcontext ;


 float FUNC_0 (float,float) ;

__attribute__((used)) static void FUNC_1( GLcontext *VAR_0, GLfloat VAR_1, GLfloat VAR_2, GLfloat VAR_3 )
{
   GLfloat VAR_4, VAR_5, VAR_6;
   GLfloat VAR_7;

   if (VAR_3<0.001F && VAR_3>-0.001F) {

      VAR_7 = 0.0F;
   }
   else {
      VAR_4 = VAR_1 / VAR_3;
      VAR_5 = VAR_2 / VAR_3;
      if (VAR_4<0.0F) VAR_4 = -VAR_4;
      if (VAR_5<0.0F) VAR_5 = -VAR_5;
      VAR_6 = FUNC_0( VAR_4, VAR_5 );


      VAR_7 = VAR_6 * VAR_0->Polygon.OffsetFactor + VAR_0->Polygon.OffsetUnits;
   }

   VAR_0->PointZoffset = VAR_0->Polygon.OffsetPoint ? VAR_7 : 0.0F;
   VAR_0->LineZoffset = VAR_0->Polygon.OffsetLine ? VAR_7 : 0.0F;
   VAR_0->PolygonZoffset = VAR_0->Polygon.OffsetFill ? VAR_7 : 0.0F;
}
